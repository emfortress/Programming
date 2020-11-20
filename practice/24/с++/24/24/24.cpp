#include <fstream>
#include <iomanip>
#include "nlohmann/json.hpp "
using json = nlohmann::json;

int main() {
    std::ifstream input("in.формат JSON");
    в JSON jinput;
    вход >> jinput;

    JSON с пользователями;
    для(автоматического & задач: jinput) {
        тип int идентификатор пользователя = задание["имя пользователя"];
        bool и завершено = задание["завершения"];

        инт user_index = -1;
        тип int я = 0;

        для(авто & элемент: пользователи) {
            если(элемент["имя пользователя"] == имя пользователя) {
                user_index = я;
                перерыва;
            }
            ++я;
        }

        если(user_index < 0) {
            пользователи.push_back({
                           {
                               "userId",
            userId
                           },
                           {
                               "task_completed",
                               0
                           }
                });
            user_index = пользователи.size() - 1;
        }

        if (completed) {
            users[user_index]["task_completed"] =
                static_cast <int >> (users[user_index]["task_completed"]) + 1;
        }
    }

    std::ofstream output("out.json");
    output << std::setw(2) < < users << std::endl;
}