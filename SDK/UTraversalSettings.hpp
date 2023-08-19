#pragma once
#include <cstdint>
#include "FTraversalDetectionSettings.hpp"
#include "FTraversalDropDownSettings.hpp"
#include "FTraversalLadderSettings.hpp"
#include "FTraversalMetricsSettings.hpp"
#include "FTraversalSnappingSettings.hpp"
#include "FTraversalSwimDiveSettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UTraversalSettings : public UDataAsset {
public:
    FTraversalDetectionSettings GroundTraversalSettings; // 0x30
    FTraversalDetectionSettings JumpFallTraversalSettings; // 0x80
    FTraversalMetricsSettings MetricsSettings; // 0xd0
    FTraversalSnappingSettings SnappingSettings; // 0x100
    FTraversalSwimDiveSettings SwimDiveSettings; // 0x1d8
    FTraversalLadderSettings LadderSettings; // 0x200
    FTraversalDropDownSettings DropDownSettings; // 0x224
    static UTraversalSettings* StaticClass();
}; // Size: 0x238
#pragma pack(pop)
