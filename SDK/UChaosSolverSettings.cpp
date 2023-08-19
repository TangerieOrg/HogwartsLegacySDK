#include "FSoftClassPath.hpp"
#include "UChaosSolverSettings.hpp"
#include "UDeveloperSettings.hpp"
UChaosSolverSettings* UChaosSolverSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosSolverEngine.ChaosSolverSettings");
    return (UChaosSolverSettings*)res;
}
