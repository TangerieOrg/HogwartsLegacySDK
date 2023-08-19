#include "AActor.hpp"
#include "AConvergeTest.hpp"
AConvergeTest* AConvergeTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConvergeTest");
    return (AConvergeTest*)res;
}
