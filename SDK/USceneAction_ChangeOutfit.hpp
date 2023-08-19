#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ChangeOutfit : public USceneRigObjectActionBase {
public:
    FName Outfit; // 0xa0
    static USceneAction_ChangeOutfit* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
