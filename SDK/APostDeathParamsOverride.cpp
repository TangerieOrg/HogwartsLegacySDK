#include "AActor.hpp"
#include "APostDeathParamsOverride.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FPostDeath_Params.hpp"
APostDeathParamsOverride* APostDeathParamsOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PostDeathParamsOverride");
    return (APostDeathParamsOverride*)res;
}
