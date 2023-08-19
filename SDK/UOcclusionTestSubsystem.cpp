#include "UGameInstanceSubsystem.hpp"
#include "UOcclusionTestSubsystem.hpp"
UOcclusionTestSubsystem* UOcclusionTestSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OcclusionTestSubsystem");
    return (UOcclusionTestSubsystem*)res;
}
