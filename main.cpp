#include <gtkmm.h>

int main(int argc, char* argv[]) {
  auto app = Gtk::Application::create(argc, argv, "");

  Gtk::Window window;
  window.show_all();

  return app->run(window);
}
