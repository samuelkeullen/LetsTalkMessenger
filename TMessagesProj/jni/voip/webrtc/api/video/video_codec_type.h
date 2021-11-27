/*
 *  Copyright (c) 2018 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef API_VIDEO_VIDEO_CODEC_TYPE_H_
#define API_VIDEO_VIDEO_CODEC_TYPE_H_

namespace webrtc {

// GENERATED_JAVA_ENUM_PACKAGE: org.webrtc
#ifndef DISABLE_H265
enum VideoCodecType {
  // Java_cpp_enum.py does not allow ifdef in enum class,
  // so we have to create two version of VideoCodecType here 
  kVideoCodecGeneric = 0,
  kVideoCodecVP8,
  kVideoCodecVP9,
  kVideoCodecAV1,
  kVideoCodecH264,
  kVideoCodecH265,
  kVideoCodecMultiplex,
};
#else
enum VideoCodecType {
  // There are various memset(..., 0, ...) calls in the code that rely on
  // kVideoCodecGeneric being zero.
  kVideoCodecGeneric = 0,
  kVideoCodecVP8,
  kVideoCodecVP9,
  kVideoCodecAV1,
  kVideoCodecH264,
  kVideoCodecMultiplex,
};
#endif

}  // namespace webrtc

#endif  // API_VIDEO_VIDEO_CODEC_TYPE_H_
