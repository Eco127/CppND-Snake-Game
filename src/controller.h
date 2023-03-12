#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"
class Game;

class Controller {
 public:
  void HandleInput(bool &running, Snake &snake, Game &game/*new*/) const;
  void OppositeDirection(Snake::Direction input);/*new*/

 private:
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite, bool &_isPoisoned /*new*/) const;
};

#endif