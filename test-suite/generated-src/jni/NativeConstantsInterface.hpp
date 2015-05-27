// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "constants_interface.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeConstantsInterface final : ::djinni::JniInterface<::ConstantsInterface, NativeConstantsInterface> {
public:
    using CppType = std::shared_ptr<::ConstantsInterface>;
    using JniType = jobject;

    using Boxed = NativeConstantsInterface;

    ~NativeConstantsInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeConstantsInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<NativeConstantsInterface>::get()._toJava(jniEnv, c)}; }

private:
    NativeConstantsInterface();
    friend ::djinni::JniClass<NativeConstantsInterface>;
    friend ::djinni::JniInterface<::ConstantsInterface, NativeConstantsInterface>;

};

}  // namespace djinni_generated