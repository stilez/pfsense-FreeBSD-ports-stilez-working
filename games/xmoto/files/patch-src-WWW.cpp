--- src/WWW.cpp.orig	2015-01-10 18:11:22.000000000 +0100
+++ src/WWW.cpp	2015-01-10 18:21:32.000000000 +0100
@@ -206,7 +206,7 @@ void FSWeb::downloadFile(const std::stri
   std::string v_www_agent = WWW_AGENT;
 
   /* open the file */
-  if( (v_destinationFile = fopen(v_local_file_tmp.c_str(), "wb")) == false) {
+  if( (v_destinationFile = fopen(v_local_file_tmp.c_str(), "wb")) == NULL) {
     throw Exception("error : unable to open output file " 
         + v_local_file_tmp);
   }
@@ -320,7 +320,7 @@ void FSWeb::uploadReplay(const std::stri
   LogInfo(std::string("Uploading replay " + p_replayFilename).c_str());
 
   /* open the file */
-  if( (v_destinationFile = fopen(v_local_file.c_str(), "wb")) == false) {
+  if( (v_destinationFile = fopen(v_local_file.c_str(), "wb")) == NULL) {
     throw Exception("error : unable to open output file " DEFAULT_WWW_MSGFILE("UR"));
   }
       
@@ -478,7 +478,7 @@ void FSWeb::sendVote(const std::string& 
   LogInfo("Sending vote");
 
   /* open the file */
-  if( (v_destinationFile = fopen(v_local_file.c_str(), "wb")) == false) {
+  if( (v_destinationFile = fopen(v_local_file.c_str(), "wb")) == NULL) {
     throw Exception("error : unable to open output file " DEFAULT_WWW_MSGFILE("SV"));
   }
       
@@ -562,7 +562,7 @@ void FSWeb::sendReport(const std::string
   LogInfo("Sending report");
 
   /* open the file */
-  if( (v_destinationFile = fopen(v_local_file.c_str(), "wb")) == false) {
+  if( (v_destinationFile = fopen(v_local_file.c_str(), "wb")) == NULL) {
     throw Exception("error : unable to open output file " DEFAULT_WWW_MSGFILE("SR"));
   }
       
@@ -677,7 +677,7 @@ void FSWeb::uploadDbSync(const std::stri
   LogInfo(std::string("Uploading dbsync " + p_dbSyncFilename + " to " + p_url_to_transfert).c_str());
 
   /* open the file */
-  if( (v_destinationFile = fopen(p_answerFile.c_str(), "wb")) == false) {
+  if( (v_destinationFile = fopen(p_answerFile.c_str(), "wb")) == NULL) {
     throw Exception("error : unable to open output file " + p_answerFile);
   }
       
