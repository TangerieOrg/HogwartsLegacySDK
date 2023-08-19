#include "UBTTask_MoveDirectlyToward.hpp"
#include "UBTTask_MoveTo.hpp"
UBTTask_MoveDirectlyToward* UBTTask_MoveDirectlyToward::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_MoveDirectlyToward");
    return (UBTTask_MoveDirectlyToward*)res;
}
