#pragma once
#include <cstdint>
#include "USceneRigProvider.hpp"
#pragma pack(push, 1)
class USceneRig_ByPlayerGender : public USceneRigProvider {
public:
    USceneRigProvider* Male; // 0x28
    USceneRigProvider* Female; // 0x30
    static USceneRig_ByPlayerGender* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
