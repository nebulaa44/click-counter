// meson config file
#include <config.h>
#include <gtk/gtk.h>

#include "window.h"

int main(int argc, char** argv) 
{
  GtkApplication *app = gtk_application_new("com.github.nebulaa44.ClickCounter", G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

  int status = g_application_run(G_APPLICATION(app), argc, argv);
  g_object_unref(app);

  return status;
}