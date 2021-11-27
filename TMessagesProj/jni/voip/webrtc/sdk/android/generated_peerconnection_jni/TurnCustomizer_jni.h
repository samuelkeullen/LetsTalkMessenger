// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/TurnCustomizer

#ifndef org_webrtc_TurnCustomizer_JNI
#define org_webrtc_TurnCustomizer_JNI

#include <jni.h>

#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_TurnCustomizer[];
const char kClassPath_org_webrtc_TurnCustomizer[] = "org/webrtc/TurnCustomizer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_TurnCustomizer_clazz(nullptr);
#ifndef org_webrtc_TurnCustomizer_clazz_defined
#define org_webrtc_TurnCustomizer_clazz_defined
inline jclass org_webrtc_TurnCustomizer_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_TurnCustomizer,
      &g_org_webrtc_TurnCustomizer_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static void JNI_TurnCustomizer_FreeTurnCustomizer(JNIEnv* env, jlong turnCustomizer);

JNI_GENERATOR_EXPORT void Java_org_webrtc_TurnCustomizer_nativeFreeTurnCustomizer(
    JNIEnv* env,
    jclass jcaller,
    jlong turnCustomizer) {
  return JNI_TurnCustomizer_FreeTurnCustomizer(env, turnCustomizer);
}


static std::atomic<jmethodID> g_org_webrtc_TurnCustomizer_getNativeTurnCustomizer(nullptr);
static jlong Java_TurnCustomizer_getNativeTurnCustomizer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_TurnCustomizer_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_TurnCustomizer_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativeTurnCustomizer",
          "()J",
          &g_org_webrtc_TurnCustomizer_getNativeTurnCustomizer);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

}  // namespace jni
}  // namespace  webrtc

// Step 4: Generated test functions (optional).


#endif  // org_webrtc_TurnCustomizer_JNI
