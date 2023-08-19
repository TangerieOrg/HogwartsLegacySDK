#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UCogTargetSceneComponent : public USceneComponent {
public:
    char pad_220[0x10];
    static UCogTargetSceneComponent* StaticClass();
    void OnCharacterLoadComplete(AActor* Actor);
    static void CogTargetSceneComponent_DebugDraw(bool bInFlag);
}; // Size: 0x230
#pragma pack(pop)
