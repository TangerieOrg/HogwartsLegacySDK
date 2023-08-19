#pragma once
#include <cstdint>
#include "EManagedVisibilityPriority.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_Visibility : public USceneRigObjectActionBase {
public:
    EManagedVisibilityPriority Priority; // 0xa0
    bool ShouldBeHidden; // 0xa1
    bool IncludeChildActors; // 0xa2
    char pad_a3[0x5];
    static USceneAction_Visibility* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
