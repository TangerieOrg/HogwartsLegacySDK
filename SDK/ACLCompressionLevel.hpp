#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ACLCompressionLevel {
    ACLCL_Lowest = 0,
    ACLCL_Low = 1,
    ACLCL_Medium = 2,
    ACLCL_High = 3,
    ACLCL_Highest = 4,
    ACLCL_MAX = 5,
};
#pragma pack(pop)
