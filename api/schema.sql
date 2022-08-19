CREATE DATABASE blog;
USE blog;

CREATE TABLE `posts` (
  `id` VARCHAR(191) NOT NULL,
  `title` VARCHAR(191) NOT NULL,
  `created_at` DATETIME NOT NULL,
  PRIMARY KEY (`id`),
  INDEX created_at_idx (`created_at`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
