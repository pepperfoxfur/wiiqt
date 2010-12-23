#ifndef TOOLS_H
#define TOOLS_H
#include "includes.h"
//#include "

#define RU(x,n)	(-(-(x) & -(n)))    //round up

#define MIN( x, y ) ( ( x ) < ( y ) ? ( x ) : ( y ) )
#define MAX( x, y ) ( ( x ) > ( y ) ? ( x ) : ( y ) )

char ascii( char s );
void hexdump( const void *d, int len );
void hexdump( const QByteArray &d, int from = 0, int len = -1 );

void hexdump12( const void *d, int len );
void hexdump12( const QByteArray &d, int from = 0, int len = -1 );

//simplified functions for crypto shit
void AesSetKey( const QByteArray &key );
QByteArray AesDecrypt( quint16 index, const QByteArray &source );
QByteArray AesEncrypt( quint16 index, const QByteArray &source );

QByteArray GetSha1( const QByteArray &stuff );

//get a padded version of the given buffer
QByteArray PaddedByteArray( const QByteArray &orig, quint32 padTo );

//read a file into a bytearray
QByteArray ReadFile( const QString &path );

//save a file to disc
bool WriteFile( const QString &path, const QByteArray &ba );

#define CERTS_DAT_SIZE 2560
extern const quint8 certs_dat[ CERTS_DAT_SIZE ];
extern const quint8 root_dat[];

#endif // TOOLS_H