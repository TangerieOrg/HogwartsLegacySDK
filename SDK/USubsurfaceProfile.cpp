#include "FSubsurfaceProfileStruct.hpp"
#include "UObject.hpp"
#include "USubsurfaceProfile.hpp"
USubsurfaceProfile* USubsurfaceProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SubsurfaceProfile");
    return (USubsurfaceProfile*)res;
}
