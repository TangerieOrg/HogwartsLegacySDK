#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERandomVelocityGenerationTypeEnum : uint8_t {
    ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
    ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
    ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
    ChaosNiagara_Max = 3,
};
#pragma pack(pop)
