#include "UActionSelectionBase.hpp"
#include "UScreen.hpp"
UActionSelectionBase* UActionSelectionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActionSelectionBase");
    return (UActionSelectionBase*)res;
}
