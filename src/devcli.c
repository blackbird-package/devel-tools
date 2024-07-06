#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/app.h"
#include "lib/git.h"
#include "lib/web.h"
#include "cli/hlp.h"
#include "cli/msg.h"


int main( int argc, char *argv[] )
{
  // validate action/argv[1] lenght
  if ( argv[1] == NULL )
  {
    devcom_notif( 2 , "Action paramter is empty, use '-h' or '--help' for available parameter" );
  }
  else if ( strlen( argv[1] ) < 1 )
  {
    devcom_notif( 2, "Action paramter is to short" );
  }
  else if ( strlen( argv[1] ) > 5 ) 
  {
    devcom_notif( 2, "Action paramater is to long" );
  }


  // malloc action/argv[1] to prevent buffer overflow
  char * action;
  action = malloc( strlen( argv[1] + 1) );
  strcpy( action, argv[1] );


  // execute available action mode
  if ( strcmp( action, "app" ) == 0 )
  {
    devcom_app_init();
  }
  else if ( strcmp( action, "git" ) == 0 )
  {
    devcom_git_init();
  }
  else if ( strcmp( action , "web" ) == 0 )
  {
    devcom_git_init();
  }
  else
  {
    devcom_notif( 1, "Unknown action, please use '-h' or '--help' for more information");
  }
  return  0;
}
