#include "UDuelTechniqueStat.hpp"
#include "UObject.hpp"
UDuelTechniqueStat* UDuelTechniqueStat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechniqueStat");
    return (UDuelTechniqueStat*)res;
}
