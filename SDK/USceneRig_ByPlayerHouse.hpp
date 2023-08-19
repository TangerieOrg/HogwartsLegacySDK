#pragma once
#include <cstdint>
#include "USceneRigProvider.hpp"
#pragma pack(push, 1)
class USceneRig_ByPlayerHouse : public USceneRigProvider {
public:
    USceneRigProvider* Gryffindor; // 0x28
    USceneRigProvider* Hufflepuff; // 0x30
    USceneRigProvider* Ravenclaw; // 0x38
    USceneRigProvider* Slytherin; // 0x40
    static USceneRig_ByPlayerHouse* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
