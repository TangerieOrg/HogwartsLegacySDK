#include "UPhoenixUserWidget.hpp"
#include "UPieceBase.hpp"
UPieceBase* UPieceBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PieceBase");
    return (UPieceBase*)res;
}
