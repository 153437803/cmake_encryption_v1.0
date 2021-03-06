#include <jni.h>

#ifndef TOOL_SIGNACTURE_H
#define TOOL_SIGNACTURE_H

static const char *app_packagename = "com.kalu.jnitools";
static const char *log_packagename_succ = "name[succ]: java = %s, c = com.kalu.jnitools";
static const char *log_packagename_fail = "name[fail]: java = %s, c = com.kalu.jnitools";

//static const int app_signature_hashcode_dev = -1758486939;
//static const int app_signature_hashcode_net = -1355372400;
static const int app_signature_hashcode_dev = -11;
static const int app_signature_hashcode_net = -22;

static const char *getmethod_signatures = "signatures";
static const char *getmethod_signatures_clazz = "[Landroid/content/pm/Signature;";

static const char *getmethod_hashcode = "hashCode";
static const char *getmethod_hashcode_clazz = "()I";

jint jni_check_signature(JNIEnv *env);

#endif