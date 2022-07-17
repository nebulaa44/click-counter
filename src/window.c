#include "window.h"

//#include <gtk/gtk.h>

void hello(GtkWidget* widget, gpointer data)
{
  g_print("Hello world!");
}

void activate(GtkApplication *app, gpointer user_data)
{
  GtkWidget *button;

  GtkWidget* window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "GTK Click Counter");
  gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

  button = gtk_button_new_with_label("0");
  g_signal_connect(button, "clicked", G_CALLBACK(hello), NULL);
  gtk_window_set_child(GTK_WINDOW(window), button);

  gtk_window_present(GTK_WINDOW(window));
}