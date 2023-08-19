#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UCameraStackModificationSettings;
#pragma pack(push, 1)
class USceneAction_CameraStackModification : public USceneRigObjectActionBase {
public:
    UCameraStackModificationSettings* Operations; // 0xa0
    char pad_a8[0x50];
    float BlendInDuration; // 0xf8
    float BlendOutDuration; // 0xfc
    static USceneAction_CameraStackModification* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
