#pragma once
#include <cstdint>
namespace EEvaluatorDataSource {
#pragma pack(push, 1)
enum Type : uint8_t {
    EDS_SourcePose = 0,
    EDS_DestinationPose = 1,
    EDS_MAX = 2,
};
#pragma pack(pop)
}
