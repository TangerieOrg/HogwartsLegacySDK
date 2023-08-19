#pragma once
#include <cstdint>
#include "FOpenColorIODisplayConfiguration.hpp"
#include "FSceneViewExtensionIsActiveFunctor.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UOpenColorIODisplayExtensionWrapper : public UObject {
public:
    char pad_28[0x10];
    static UOpenColorIODisplayExtensionWrapper* StaticClass();
    void SetSceneExtensionIsActiveFunctions(TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
    void SetSceneExtensionIsActiveFunction(FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);
    void RemoveSceneExtension();
    static UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
}; // Size: 0x38
#pragma pack(pop)
