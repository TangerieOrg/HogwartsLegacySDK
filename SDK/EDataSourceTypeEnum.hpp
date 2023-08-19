#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDataSourceTypeEnum : uint8_t {
    ChaosNiagara_DataSourceType_Collision = 0,
    ChaosNiagara_DataSourceType_Breaking = 1,
    ChaosNiagara_DataSourceType_Trailing = 2,
    ChaosNiagara_Max = 3,
};
#pragma pack(pop)
