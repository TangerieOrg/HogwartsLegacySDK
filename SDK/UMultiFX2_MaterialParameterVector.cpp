#include "FVector.hpp"
#include "UMultiFX2_MaterialParameterBase.hpp"
#include "UMultiFX2_MaterialParameterVector.hpp"
UMultiFX2_MaterialParameterVector* UMultiFX2_MaterialParameterVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialParameterVector");
    return (UMultiFX2_MaterialParameterVector*)res;
}
