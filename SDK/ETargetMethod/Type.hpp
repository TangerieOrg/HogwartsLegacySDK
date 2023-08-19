#pragma once
#include <cstdint>
namespace ETargetMethod {
#pragma pack(push, 1)
enum Type {
    None = 0,
    Replace = 1,
    Stack = 2,
    ETargetMethod_MAX = 3,
};
#pragma pack(pop)
}
