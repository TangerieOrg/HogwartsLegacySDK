#pragma once
#include <cstdint>
#include "FNPC_MobilityDataContainer.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UNPC_MobilityDataContainerAsset : public UDataAsset {
public:
    FNPC_MobilityDataContainer ContainerData; // 0x30
    static UNPC_MobilityDataContainerAsset* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
