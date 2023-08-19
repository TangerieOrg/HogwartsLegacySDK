#pragma once
#include <cstdint>
namespace EPawnSubActionTriggeringPolicy {
#pragma pack(push, 1)
enum Type {
    CopyBeforeTriggering = 0,
    ReuseInstances = 1,
    EPawnSubActionTriggeringPolicy_MAX = 2,
};
#pragma pack(pop)
}
