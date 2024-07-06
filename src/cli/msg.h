int devcom_notif( int code, char *msg )
{
  if ( code = 1 )
  {
    printf( "Error : %s\n", "Unknown action, please use '-h' or '--help' for more information" );
    exit(1);
  }
  else if ( code = 2) 
  {
    printf( "Error : %s\n", msg );
    exit(1);
  }
  return 0;
}
