#include "UFXEnd.hpp"
#include "UMultiFX2End_MultiFX2.hpp"
#include "UMultiFX2_Base.hpp"
UMultiFX2End_MultiFX2* UMultiFX2End_MultiFX2::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2End_MultiFX2");
    return (UMultiFX2End_MultiFX2*)res;
}
