#include <doctest/doctest.h>
#include <pusher/pusher.h>
#include <pusher/version.h>

#include <string>

TEST_CASE("Pusher") {
  using namespace pusher;

  Pusher greeter("Tests");

  CHECK(greeter.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(greeter.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(greeter.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(greeter.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Pusher version") {
  static_assert(std::string_view(PUSHER_VERSION) == std::string_view("1.0"));
  CHECK(std::string(PUSHER_VERSION) == std::string("1.0"));
}
