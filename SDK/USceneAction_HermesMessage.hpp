#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_HermesMessage : public USceneRigObjectActionBase {
public:
    FName Message; // 0xa0
    static USceneAction_HermesMessage* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
