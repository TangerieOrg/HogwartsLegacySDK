#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
#include "UFXAutoTriggerPrerequisiteBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerPrerequisiteIsBundleLoaded : public UFXAutoTriggerPrerequisiteBase {
public:
    FMaterialPermuterKeyProperty Key; // 0x28
    EMaterialPermuterLoadingPriority Priority; // 0x38
    char pad_39[0x7];
    static UFXAutoTriggerPrerequisiteIsBundleLoaded* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
