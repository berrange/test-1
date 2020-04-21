
#include <glib.h>
#include <gnutls/gnutls.h>

int main(int argc, char **argv) {
  gnutls_global_init();
  g_printerr("Hello World\n");
}
