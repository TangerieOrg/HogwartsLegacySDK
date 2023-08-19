#pragma once
#include <cstdint>
#include "FNPC_CrimeSceneSense.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UNPC_CrimeSceneSenseAsset : public UDataAsset {
public:
    FNPC_CrimeSceneSense CrimeSceneSense; // 0x30
    static UNPC_CrimeSceneSenseAsset* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
