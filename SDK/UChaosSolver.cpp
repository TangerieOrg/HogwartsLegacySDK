#include "UChaosSolver.hpp"
#include "UObject.hpp"
UChaosSolver* UChaosSolver::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosSolverEngine.ChaosSolver");
    return (UChaosSolver*)res;
}
