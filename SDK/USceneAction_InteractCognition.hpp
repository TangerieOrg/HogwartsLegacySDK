#pragma once
#include <cstdint>
#include "ECalloutActions.hpp"
#include "ECalloutBlipType.hpp"
#include "ECalloutType.hpp"
#include "FVector.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_InteractCognition : public USceneRigObjectActionBase {
public:
    ECalloutType CalloutType; // 0xa0
    ECalloutBlipType CalloutBlipType; // 0xa1
    ECalloutActions CalloutAction; // 0xa2
    char pad_a3[0x1d];
    float CalloutChargeTime; // 0xc0
    float FootprintRadius; // 0xc4
    float TopOffset; // 0xc8
    float BottomOffset; // 0xcc
    FVector CalloutOffset; // 0xd0
    char pad_dc[0x4];
    static USceneAction_InteractCognition* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
