// Copyright Epic Games, Inc. All Rights Reserved.

#include "SebBarthAtmo.h"

#define LOCTEXT_NAMESPACE "FSebBarthAtmoModule"

void FSebBarthAtmoModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	// Maps virtual shader source directory to actual shaders directory on disk.
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("SebBarthAtmo/Shaders/Private"));
	AddShaderSourceDirectoryMapping("/Shaders", ShaderDirectory);
}

void FSebBarthAtmoModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSebBarthAtmoModule, SebBarthAtmo)