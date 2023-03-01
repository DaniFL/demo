#ifndef __LIBNATIVE_IMAGE_AGENT_H
#define __LIBNATIVE_IMAGE_AGENT_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef long long int (*BreakpointInterceptor__nativeAllocateInstance__37e9f4e0915e5a3ab017080b2590641db8fe82e5_fn_t)(struct JNIEnv_* jni, void * self, void * clazz);

typedef void (*BreakpointInterceptor__onBreakpoint__0173e8123278a797c40ae318dca97fed56f24ff9_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, long long int location);

typedef void (*BreakpointInterceptor__onNativeMethodBind__d8aa4d25f6ef40bf075bb7b6b5e5d21ef9f50b1a_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, void * address, void** newAddressPtr);

typedef void (*BreakpointInterceptor__onClassPrepare__f5abc9a68f6a749f8b14297b60fbfc3df709f56a_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, void * clazz);

typedef void (*BreakpointInterceptor__onClassFileLoadHook__3acfb93f2e5f2ab8b3fbd332eb5f97b65b2811d9_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * classBeingRedefined, void * loader, char* name, void * protectionDomain, int classDataLen, char* classData, int* newClassDataLen, char** newClassData);

typedef void * (*DefineClass_fn_t)(struct JNIEnv_* env, char* name, void * loader, char* buf, int bufLen);

typedef void * (*FindClass_fn_t)(struct JNIEnv_* env, char* name);

typedef struct _jmethodID* (*GetMethodID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef struct _jmethodID* (*GetStaticMethodID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef struct _jfieldID* (*GetFieldID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef struct _jfieldID* (*GetStaticFieldID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef int (*ThrowNew_fn_t)(struct JNIEnv_* env, void * clazz, char* message);

typedef struct _jmethodID* (*FromReflectedMethod_fn_t)(struct JNIEnv_* env, void * method);

typedef struct _jfieldID* (*FromReflectedField_fn_t)(struct JNIEnv_* env, void * field);

typedef void * (*ToReflectedMethod_fn_t)(struct JNIEnv_* env, void * clazz, struct _jmethodID* method, int isStatic);

typedef void * (*ToReflectedField_fn_t)(struct JNIEnv_* env, void * clazz, struct _jfieldID* field, int isStatic);

typedef void * (*NewObjectArray_fn_t)(struct JNIEnv_* env, int length, void * elementClass, void * initialElement);

typedef int (*Agent_OnLoad_fn_t)(struct JavaVM_* vm, char* options, void * reserved);

typedef int (*Agent_OnUnload_fn_t)(struct JavaVM_* vm);

typedef void (*JvmtiAgentBase__onVMStart__b239adacb81763565e6898e3884190995c759d91_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

typedef void (*JvmtiAgentBase__onVMInit__e307a700d3e32bcbc302a0f3b18718cd0805cdb1_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

typedef void (*JvmtiAgentBase__onVMDeath__3688cb6c79ece54d21e5606d046b60250c963336_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

typedef void (*JvmtiAgentBase__onThreadEnd__44cc85a103b75b0d8b2a13b430f36d56416faaff_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

#if defined(__cplusplus)
}
#endif
#endif
