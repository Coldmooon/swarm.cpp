#include <common_lib.hpp>
#include "impl/swarm_impl.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("swarm_agent");


    SwarmROS SwarmROS(node);
    
    rclcpp::spin(node);

    rclcpp::shutdown();


   return 0;  
}