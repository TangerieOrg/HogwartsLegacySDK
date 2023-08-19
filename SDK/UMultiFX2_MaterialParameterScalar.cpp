#include "UMultiFX2_MaterialParameterBase.hpp"
#include "UMultiFX2_MaterialParameterScalar.hpp"
UMultiFX2_MaterialParameterScalar* UMultiFX2_MaterialParameterScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialParameterScalar");
    return (UMultiFX2_MaterialParameterScalar*)res;
}
