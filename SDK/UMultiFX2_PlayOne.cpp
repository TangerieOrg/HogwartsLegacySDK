#include "UMultiFX2_Base.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_PlayOne.hpp"
UMultiFX2_PlayOne* UMultiFX2_PlayOne::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_PlayOne");
    return (UMultiFX2_PlayOne*)res;
}
