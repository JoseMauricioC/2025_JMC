import { NestFactory } from '@nestjs/core';
import { AppModule } from './app.module';
import { VersioningType } from '@nestjs/common';

async function bootstrap() {
  const app = await NestFactory.create(AppModule);
  app.setGlobalPrefix('api');
  app.enableVersioning({ type: VersioningType.URI, defaultVersion: '1' });
  app.enableCors();

  //await app.listen(process.env.PORT ?? 3000);
  await app.listen(process.env.PORT ?? '');
  console.log(`App corriendo en ${await app.getUrl()}`);
}
bootstrap();
