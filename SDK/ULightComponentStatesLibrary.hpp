#pragma once
#include <cstdint>
#include "FLightComponentStates.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FLightComponentStatesSaveData;
class UObject;
#pragma pack(push, 1)
class ULightComponentStatesLibrary : public UBlueprintFunctionLibrary {
public:
    static ULightComponentStatesLibrary* StaticClass();
    static void LightComponentStatesUpdate(AActor* Actor, FLightComponentStatesSaveData& LightComponentStatesSaveData, bool bIncludeChildActors);
    static void LightComponentStatesRestore(FLightComponentStatesSaveData& LightComponentStatesSaveData);
    static void LightComponentStatesInitialize(UObject* Owner, FLightComponentStatesSaveData& LightComponentStatesSaveData, FLightComponentStates LightComponentStates);
    static void AddLightComponentStateVisibility(UObject* Owner, FLightComponentStatesSaveData& LightComponentStatesSaveData, bool bVisible);
    static void AddLightComponentStateCastShadow(UObject* Owner, FLightComponentStatesSaveData& LightComponentStatesSaveData, bool bCastShadow);
}; // Size: 0x28
#pragma pack(pop)
