#include "UFXFilter.hpp"
#include "UFXFilter_SecondsBetweenSpawns.hpp"
UFXFilter_SecondsBetweenSpawns* UFXFilter_SecondsBetweenSpawns::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_SecondsBetweenSpawns");
    return (UFXFilter_SecondsBetweenSpawns*)res;
}
